/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {
    GEOABSecondPartyPlaceRequestClientMetaData * _abAssignmentMetadata;
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEORPClientCapabilities * _clientCapabilities;
    struct { 
        unsigned int read_abAssignmentMetadata : 1; 
        unsigned int read_analyticMetadata : 1; 
        unsigned int read_clientCapabilities : 1; 
        unsigned int read_problemIds : 1; 
        unsigned int read_servicesState : 1; 
        unsigned int read_statusNotificationId : 1; 
        unsigned int read_userCredentials : 1; 
        unsigned int wrote_abAssignmentMetadata : 1; 
        unsigned int wrote_analyticMetadata : 1; 
        unsigned int wrote_clientCapabilities : 1; 
        unsigned int wrote_problemIds : 1; 
        unsigned int wrote_servicesState : 1; 
        unsigned int wrote_statusNotificationId : 1; 
        unsigned int wrote_userCredentials : 1; 
    }  _flags;
    NSMutableArray * _problemIds;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOServicesState * _servicesState;
    NSString * _statusNotificationId;
    GEORPUserCredentials * _userCredentials;
}

@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *abAssignmentMetadata;
@property (nonatomic, retain) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, retain) GEORPClientCapabilities *clientCapabilities;
@property (nonatomic, readonly) bool hasAbAssignmentMetadata;
@property (nonatomic, readonly) bool hasAnalyticMetadata;
@property (nonatomic, readonly) bool hasClientCapabilities;
@property (nonatomic, readonly) bool hasServicesState;
@property (nonatomic, readonly) bool hasStatusNotificationId;
@property (nonatomic, readonly) bool hasUserCredentials;
@property (nonatomic, retain) NSMutableArray *problemIds;
@property (nonatomic, retain) GEOServicesState *servicesState;
@property (nonatomic, retain) NSString *statusNotificationId;
@property (nonatomic, retain) GEORPUserCredentials *userCredentials;

+ (bool)isValid:(id)arg1;
+ (Class)problemIdType;

- (void).cxx_destruct;
- (void)_addNoFlagsProblemId:(id)arg1;
- (void)_readAbAssignmentMetadata;
- (void)_readAnalyticMetadata;
- (void)_readClientCapabilities;
- (void)_readProblemIds;
- (void)_readServicesState;
- (void)_readStatusNotificationId;
- (void)_readUserCredentials;
- (id)abAssignmentMetadata;
- (void)addProblemId:(id)arg1;
- (id)analyticMetadata;
- (void)clearProblemIds;
- (id)clientCapabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbAssignmentMetadata;
- (bool)hasAnalyticMetadata;
- (bool)hasClientCapabilities;
- (bool)hasServicesState;
- (bool)hasStatusNotificationId;
- (bool)hasUserCredentials;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)populateAnalyticsMetadata;
- (id)problemIdAtIndex:(unsigned long long)arg1;
- (id)problemIds;
- (unsigned long long)problemIdsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)servicesState;
- (void)setAbAssignmentMetadata:(id)arg1;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setProblemIds:(id)arg1;
- (void)setServicesState:(id)arg1;
- (void)setStatusNotificationId:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (id)statusNotificationId;
- (id)userCredentials;
- (void)writeTo:(id)arg1;

@end
