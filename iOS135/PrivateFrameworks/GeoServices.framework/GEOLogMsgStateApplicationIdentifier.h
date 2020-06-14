/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateApplicationIdentifier : PBCodable <NSCopying> {
    bool  _appDarkMode;
    NSString * _appIdentifier;
    NSString * _appMajorVersion;
    NSString * _appMinorVersion;
    struct { 
        unsigned int has_appDarkMode : 1; 
        unsigned int read_appIdentifier : 1; 
        unsigned int read_appMajorVersion : 1; 
        unsigned int read_appMinorVersion : 1; 
        unsigned int wrote_appIdentifier : 1; 
        unsigned int wrote_appMajorVersion : 1; 
        unsigned int wrote_appMinorVersion : 1; 
        unsigned int wrote_appDarkMode : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic) bool appDarkMode;
@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, retain) NSString *appMajorVersion;
@property (nonatomic, retain) NSString *appMinorVersion;
@property (nonatomic) bool hasAppDarkMode;
@property (nonatomic, readonly) bool hasAppIdentifier;
@property (nonatomic, readonly) bool hasAppMajorVersion;
@property (nonatomic, readonly) bool hasAppMinorVersion;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readAppIdentifier;
- (void)_readAppMajorVersion;
- (void)_readAppMinorVersion;
- (bool)appDarkMode;
- (id)appIdentifier;
- (id)appMajorVersion;
- (id)appMinorVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppDarkMode;
- (bool)hasAppIdentifier;
- (bool)hasAppMajorVersion;
- (bool)hasAppMinorVersion;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppDarkMode:(bool)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setHasAppDarkMode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end