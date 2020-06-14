//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarRecordChangeTracker-Protocol.h>

@class AVTCoreEnvironment;
@protocol AVTAvatarManagedRecordTransformer, AVTCoreDataPersistentStoreConfiguration, AVTUILogger;

@interface AVTCoreDataChangeTracker : NSObject <AVTAvatarRecordChangeTracker>
{
    id <AVTCoreDataPersistentStoreConfiguration> _configuration;
    AVTCoreEnvironment *_environment;
    id <AVTUILogger> _logger;
    id <AVTAvatarManagedRecordTransformer> _recordTransformer;
}

+ (id)tokenFileURLForLocation:(id)arg1;
@property(readonly, nonatomic) id <AVTAvatarManagedRecordTransformer> recordTransformer; // @synthesize recordTransformer=_recordTransformer;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTCoreEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTCoreDataPersistentStoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)recordIdentifierForChange:(id)arg1 managedObjectContext:(id)arg2;
- (id)enumerateChangesAfterToken:(id)arg1 managedObjectContext:(id)arg2 changesHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)saveToken:(id)arg1 location:(id)arg2 error:(id *)arg3;
- (id)currentHistoryTokenForLocation:(id)arg1;
- (id)trackerChangesFromPersistentChanges:(id)arg1 managedObjectContext:(id)arg2;
- (_Bool)processChangeTransactionsWithChangeTokenLocation:(id)arg1 handler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 recordTransformer:(id)arg2 environment:(id)arg3;
- (id)initWithConfiguration:(id)arg1 environment:(id)arg2;

@end

