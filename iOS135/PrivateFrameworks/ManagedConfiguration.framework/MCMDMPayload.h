/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCMDMPayload : MCPayload {
    int  _accessRights;
    NSArray * _checkInPinningPersistentRefs;
    NSArray * _checkInPinningUUIDs;
    NSString * _checkInURLString;
    bool  _checkOutWhenRemoved;
    NSNumber * _checkOutWhenRemovedNum;
    NSString * _easEnrollmentID;
    NSString * _enrollmentID;
    NSString * _iCloudEnrollmentID;
    NSData * _identityPersistentID;
    NSString * _identityUUID;
    NSString * _managedAppleID;
    NSString * _personaID;
    bool  _pinningRevocationCheckRequired;
    NSArray * _serverCapabilities;
    NSArray * _serverPinningPersistentRefs;
    NSArray * _serverPinningUUIDs;
    NSString * _serverURLString;
    bool  _signMessage;
    NSNumber * _signMessageNum;
    NSString * _topic;
    bool  _useDevelopmentAPNS;
    NSNumber * _useDevelopmentAPNSNum;
}

@property (nonatomic, readonly) int accessRights;
@property (nonatomic, retain) NSArray *checkInPinningPersistentRefs;
@property (nonatomic, readonly, retain) NSArray *checkInPinningUUIDs;
@property (nonatomic, readonly, retain) NSString *checkInURLString;
@property (nonatomic, readonly) bool checkOutWhenRemoved;
@property (nonatomic, readonly) NSNumber *checkOutWhenRemovedNum;
@property (nonatomic, retain) NSString *easEnrollmentID;
@property (nonatomic, retain) NSString *enrollmentID;
@property (nonatomic, retain) NSString *iCloudEnrollmentID;
@property (nonatomic, retain) NSData *identityPersistentID;
@property (nonatomic, readonly, retain) NSString *identityUUID;
@property (nonatomic, readonly) bool isUserEnrollment;
@property (nonatomic, readonly, retain) NSArray *localizedAccessRightDescriptions;
@property (nonatomic, readonly, retain) NSString *managedAppleID;
@property (nonatomic, readonly, retain) NSString *managedAppleIDName;
@property (nonatomic, retain) NSString *personaID;
@property (nonatomic, readonly) bool pinningRevocationCheckRequired;
@property (nonatomic, readonly) NSArray *serverCapabilities;
@property (nonatomic, retain) NSArray *serverPinningPersistentRefs;
@property (nonatomic, readonly, retain) NSArray *serverPinningUUIDs;
@property (nonatomic, readonly, retain) NSString *serverURLString;
@property (nonatomic, readonly) bool signMessage;
@property (nonatomic, readonly) NSNumber *signMessageNum;
@property (nonatomic, readonly, retain) NSString *topic;
@property (nonatomic, readonly) bool useDevelopmentAPNS;
@property (nonatomic, readonly) NSNumber *useDevelopmentAPNSNum;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)_invalidRightsError;
- (id)_invalidTopicError;
- (id)_nonHTTPSURLErrorForField:(id)arg1;
- (int)accessRights;
- (id)checkInPinningPersistentRefs;
- (id)checkInPinningUUIDs;
- (id)checkInURLString;
- (bool)checkOutWhenRemoved;
- (id)checkOutWhenRemovedNum;
- (id)description;
- (id)easEnrollmentID;
- (id)enrollmentID;
- (id)iCloudEnrollmentID;
- (id)identityPersistentID;
- (id)identityUUID;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (bool)isUserEnrollment;
- (id)kvsForCertUUIDs:(id)arg1 persistentRefs:(id)arg2 labelKey:(id)arg3;
- (id)localizedAccessRightDescriptions;
- (id)managedAppleID;
- (id)managedAppleIDName;
- (id)payloadDescriptionKeyValueSections;
- (id)personaID;
- (bool)pinningRevocationCheckRequired;
- (id)serverCapabilities;
- (id)serverPinningPersistentRefs;
- (id)serverPinningUUIDs;
- (id)serverURLString;
- (void)setCheckInPinningPersistentRefs:(id)arg1;
- (void)setEasEnrollmentID:(id)arg1;
- (void)setEnrollmentID:(id)arg1;
- (void)setICloudEnrollmentID:(id)arg1;
- (void)setIdentityPersistentID:(id)arg1;
- (void)setPersonaID:(id)arg1;
- (void)setServerPinningPersistentRefs:(id)arg1;
- (bool)signMessage;
- (id)signMessageNum;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)topic;
- (bool)useDevelopmentAPNS;
- (id)useDevelopmentAPNSNum;

@end