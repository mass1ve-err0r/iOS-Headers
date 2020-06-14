//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface PSYWatchSyncClientState : NSObject
{
    _Bool _migrationSync;
    NSArray *_completedActivityLabels;
    NSArray *_activeActivityLabels;
    NSSet *_completedActivityLabelsSet;
    NSSet *_activeActivityLabelsSet;
    unsigned long long _syncSessionState;
    unsigned long long _syncSessionType;
    unsigned long long _version;
}

@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) _Bool migrationSync; // @synthesize migrationSync=_migrationSync;
@property(readonly, nonatomic) unsigned long long syncSessionType; // @synthesize syncSessionType=_syncSessionType;
@property(readonly, nonatomic) unsigned long long syncSessionState; // @synthesize syncSessionState=_syncSessionState;
@property(readonly, nonatomic) NSArray *activeActivityLabels; // @synthesize activeActivityLabels=_activeActivityLabels;
@property(readonly, nonatomic) NSArray *completedActivityLabels; // @synthesize completedActivityLabels=_completedActivityLabels;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)plistRepresentation;
@property(readonly, nonatomic) NSSet *activeActivityLabelsSet; // @synthesize activeActivityLabelsSet=_activeActivityLabelsSet;
@property(readonly, nonatomic) NSSet *completedActivityLabelsSet; // @synthesize completedActivityLabelsSet=_completedActivityLabelsSet;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)initWithSyncSessionState:(unsigned long long)arg1 syncSessionType:(unsigned long long)arg2 migrationSync:(_Bool)arg3 activities:(id)arg4 completedActivities:(id)arg5;

@end

