//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/NSCopying-Protocol.h>

@class NSString;

@interface FBProcessState : NSObject <BSDescriptionProviding, NSCopying>
{
    int _pid;
    _Bool _running;
    _Bool _foreground;
    int _taskState;
    int _visibility;
    int _effectiveVisibility;
}

@property(nonatomic) int effectiveVisibility; // @synthesize effectiveVisibility=_effectiveVisibility;
@property(nonatomic) int visibility; // @synthesize visibility=_visibility;
@property(nonatomic) int taskState; // @synthesize taskState=_taskState;
@property(nonatomic, getter=isForeground) _Bool foreground; // @synthesize foreground=_foreground;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) int pid; // @synthesize pid=_pid;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPid:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

