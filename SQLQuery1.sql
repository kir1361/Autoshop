CREATE TABLE [dbo].[Manufacturer]
(
	[Id] INT NOT NULL PRIMARY KEY,
	ManufacturerName NVARCHAR (100) NOT NULL,
	Country NVARCHAR (100) NOT NULL,
)
CREATE TABLE [dbo].[Model]
(
	[Id] INT NOT NULL PRIMARY KEY,
	ModelName NVARCHAR (100) NOT NULL,
	ManufacturerId INT NOT NULL  FOREIGN KEY REFERENCES [dbo].[Manufacturer](Id), 
    [Mass] FLOAT NOT NULL, 
    [Lenght] FLOAT NOT NULL, 
    [Width] FLOAT NOT NULL, 
    [Height] FLOAT NOT NULL, 
    [Clearance] FLOAT NOT NULL, 
    [BodyType] NCHAR(100) NOT NULL ,
)
CREATE TABLE [dbo].[Equipment]
(
	[Id] INT NOT NULL PRIMARY KEY,
	EngineName NVARCHAR(100)NOT NULL, 
   	 EngineVolume FLOAT NOT NULL,
	WheelDrive NVARCHAR(100)NOT NULL, 
	TransmissionType NVARCHAR(100)NOT NULL, 
	HorsePower INT NOT NULL, 
	MaxSpeed INT NOT NULL, 
	FuelConsumption FLOAT NOT NULL,
	ModelId INT NOT NULL  FOREIGN KEY REFERENCES [dbo].[Model](Id), 

)
CREATE TABLE [dbo].[CAR]
(
	[Id] INT NOT NULL PRIMARY KEY, 
    Color NVARCHAR(100) NOT NULL,
	Price INT NOT NULL,
	Photo NVARCHAR(100) NOT NULL,
	ModelId INT NOT NULL FOREIGN KEY REFERENCES [dbo].[Model](Id),
	EquipmentId INT NOT NULL FOREIGN KEY REFERENCES [dbo].[Equipment](Id),
)
CREATE TABLE [dbo].[User]
(
	[Id] INT NOT NULL PRIMARY KEY,
	FirstName NVARCHAR(100) NOT NULL,
	SecondName NVARCHAR(100) NOT NULL,
	Email  NVARCHAR(100) NOT NULL,
	Password NVARCHAR(100) NOT NULL,
	Photo NVARCHAR(100) NOT NULL,

)


