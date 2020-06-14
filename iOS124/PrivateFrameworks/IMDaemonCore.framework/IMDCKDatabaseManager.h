//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, IMDCKMockDatabase;

@interface IMDCKDatabaseManager : NSObject
{
    _Bool _useStingRay;
    CKContainer *_stingRayContainer;
    CKContainer *_manateeContainer;
    CKContainer *_nonHSA2ManateeContainer;
    IMDCKMockDatabase *_mockDatabase;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) IMDCKMockDatabase *mockDatabase; // @synthesize mockDatabase=_mockDatabase;
@property(readonly, nonatomic) CKContainer *nonHSA2ManateeContainer; // @synthesize nonHSA2ManateeContainer=_nonHSA2ManateeContainer;
@property(readonly, nonatomic) CKContainer *manateeContainer; // @synthesize manateeContainer=_manateeContainer;
@property(readonly, nonatomic) CKContainer *stingRayContainer; // @synthesize stingRayContainer=_stingRayContainer;
@property(nonatomic) _Bool useStingRay; // @synthesize useStingRay=_useStingRay;
- (id)nonHSA2ManateeDatabase;
- (id)manateeDataBase;
@property(readonly, nonatomic) CKContainer *truthContainer;
- (id)stingRayDatabase;
- (id)truthDatabase;
- (_Bool)_useMockCloudKit;
- (void)dealloc;
- (id)init;

@end

