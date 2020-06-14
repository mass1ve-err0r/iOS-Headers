//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NoteContext;
@protocol OS_dispatch_queue;

@interface DALocalDBHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_abDBQueue;
    NSObject<OS_dispatch_queue> *_calDBQueue;
    NSObject<OS_dispatch_queue> *_bookmarkDBQueue;
    NSObject<OS_dispatch_queue> *_noteDBQueue;
    int _abConnectionCount;
    int _calConnectionCount;
    int _bookmarkConnectionCount;
    int _noteConnectionCount;
    void *_abDB;
    struct CalDatabase *_calDB;
    NSString *_clientIdentifier;
    void *_bookmarkDB;
    NoteContext *_noteDB;
    CDUnknownBlockType _calUnitTestCallbackBlock;
}

+ (id)calTestCalDBDir;
+ (void)calSetTestCalDBDir:(id)arg1;
+ (id)abTestABDBDir;
+ (void)abSetTestABDBDir:(id)arg1;
+ (id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2;
@property(copy, nonatomic) CDUnknownBlockType calUnitTestCallbackBlock; // @synthesize calUnitTestCallbackBlock=_calUnitTestCallbackBlock;
@property(nonatomic) int noteConnectionCount; // @synthesize noteConnectionCount=_noteConnectionCount;
@property(retain, nonatomic) NoteContext *noteDB; // @synthesize noteDB=_noteDB;
@property(nonatomic) int bookmarkConnectionCount; // @synthesize bookmarkConnectionCount=_bookmarkConnectionCount;
@property(nonatomic) void *bookmarkDB; // @synthesize bookmarkDB=_bookmarkDB;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) int calConnectionCount; // @synthesize calConnectionCount=_calConnectionCount;
@property(nonatomic) struct CalDatabase *calDB; // @synthesize calDB=_calDB;
@property(nonatomic) int abConnectionCount; // @synthesize abConnectionCount=_abConnectionCount;
@property(nonatomic) void *abDB; // @synthesize abDB=_abDB;
- (void).cxx_destruct;
- (void)calUnitTestsSetCallbackBlockForSave:(CDUnknownBlockType)arg1;
- (_Bool)noteCloseDBAndSave:(_Bool)arg1;
- (_Bool)noteSaveDB;
- (void)noteOpenDB;
- (void)bookmarkCloseDBAndSave:(_Bool)arg1;
- (void)bookmarkSaveDB;
- (_Bool)bookmarkOpenDB;
- (_Bool)calCloseDBAndSave:(_Bool)arg1;
- (_Bool)calSaveDBAndFlushCaches;
- (_Bool)calSaveDB;
- (void)calClearSuperfluousChanges;
- (void)calOpenDBAsGenericClient;
- (void)calOpenDBWithClientIdentifier:(id)arg1;
- (_Bool)_calOpenDBWithClientIdentifier:(id)arg1;
- (void)_registerForCalendarYieldNotifications;
- (id)abConstraintPlistPath;
- (_Bool)abCloseDBAndSave:(_Bool)arg1;
- (_Bool)abSaveDB;
- (void)abProcessAddedImages;
- (void)abProcessAddedRecords;
- (void)abClearSuperfluousChanges;
- (void)abOpenDBAsGenericClient;
- (void)abOpenDBWithClientIdentifier:(id)arg1;
- (_Bool)_abOpenDBWithClientIdentifier:(id)arg1;
- (void)_registerForAddressBookYieldNotifications;
- (void *)abDBThrowOnNil:(_Bool)arg1;
- (id)changeTrackingID;
- (id)init;

@end

