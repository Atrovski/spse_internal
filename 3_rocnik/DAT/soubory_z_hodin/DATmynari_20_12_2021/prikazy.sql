SOURCE /home/x3b_mynari/Databaze/ordinace.sql




CREATE VIEW ordinacePohled AS SELECT * FROM pacienti,lekari WHERE id_l=lekar; /* Vytvo�en� pohledu */






ALTER TABLE pacienti ADD �as time;
UPDATE pacienti SET �as=curtime() where id_p=1;

