# reason-sql-driver-app

Reason で SQL 叩く. DB のドライバーには [bs-mysql](https://github.com/davidgomes/bs-mysql)を利用.

# Build

```bash
# for yarn
yarn build
```

# How to use

```zsh
# start MySQL container
docker-compose up

# db migration and drop table
sh init-mysql.sh

# exec query
node src/Demo.re.js
```
