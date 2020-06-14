/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKASMWorldBuildOperation : CATOperation {
    NSArray * _classKitClasses;
    <CRKClassKitCurrentUser> * _classKitCurrentUser;
    NSDictionary * _classKitLocationsByLocationID;
    CRKASMRosterProviderConfiguration * _configuration;
    NSSet * _manageableLocationIDs;
    NSDictionary * _trustedClassKitPersonsByClassID;
}

@property (nonatomic, retain) NSArray *classKitClasses;
@property (nonatomic, retain) <CRKClassKitCurrentUser> *classKitCurrentUser;
@property (nonatomic, copy) NSDictionary *classKitLocationsByLocationID;
@property (nonatomic, readonly) CRKASMRosterProviderConfiguration *configuration;
@property (nonatomic, copy) NSSet *manageableLocationIDs;
@property (nonatomic, copy) NSDictionary *trustedClassKitPersonsByClassID;

+ (id)makeErrorWithErrorsByObjectID:(id)arg1;

- (void).cxx_destruct;
- (void)buildClassKitClasses;
- (void)buildClassKitLocationsByLocationID;
- (void)buildCurrentClassKitUser;
- (void)buildManageableLocationIDs;
- (void)buildTrustedClassKitPersonsByClassID;
- (void)checkAccountEligibility;
- (id)classKitClasses;
- (id)classKitCurrentUser;
- (id)classKitLocationsByLocationID;
- (id)compileResult;
- (id)configuration;
- (void)finish;
- (void)finishWithEmptyResultObject;
- (void)housekeepKeychain;
- (void)housekeepKeychainWithRoster:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (bool)isAsynchronous;
- (void)main;
- (id)makeHousekeeperWithRoster:(id)arg1;
- (id)manageableLocationIDs;
- (void)setClassKitClasses:(id)arg1;
- (void)setClassKitCurrentUser:(id)arg1;
- (void)setClassKitLocationsByLocationID:(id)arg1;
- (void)setManageableLocationIDs:(id)arg1;
- (void)setTrustedClassKitPersonsByClassID:(id)arg1;
- (id)trustedClassKitPersonsByClassID;

@end