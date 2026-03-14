use rusqlite::{Connection, Result};

pub struct Dictionary {
    conn: Connection,
}

pub struct Entry {
    pub word: String,
    pub phonetic: String,
    pub pos: String,
    pub translation: String,
}

impl Dictionary {
    pub fn open(path: &str) -> Result<Self> {
        let conn = Connection::open(path)?;
        Ok(Self { conn })
    }

    
}
