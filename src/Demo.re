let conn =
  Mysql.createConnection(~host="127.0.0.1", ~port=3306, ~user="ojisan", ~password="ojisan", ());

Mysql.query(conn, "INSERT INTO database.t_user VALUES (1,'taro', null, null);", result => {
  switch (result) {
  | Ok(results) => Js.log(results.results)
  | Error(err) => Js.log(err##message)
  }
});

Mysql.query(conn, "SELECT * from database.t_user", result => {
  switch (result) {
  | Ok(results) => Js.log(results.results)
  | Error(err) => Js.log(err##message)
  }
});

Mysql.endConnection(conn);