//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class BSAuditToken, BSMachPortTaskNameRight, NSString;

@interface BSProcessHandle : NSObject <BSXPCCoding, NSSecureCoding>
{
    int _pid;
    NSString *_name;
    NSString *_bundleID;
    NSString *_jobLabel;
    NSString *_bundlePath;
    BSMachPortTaskNameRight *_taskNameRight;
    BSAuditToken *_auditToken;
}

+ (_Bool)supportsSecureCoding;
+ (id)processHandleForPID:(int)arg1 bundleID:(id)arg2;
+ (id)processHandleForTaskNameRight:(id)arg1;
+ (id)processHandleForPID:(int)arg1;
+ (id)processHandleForNSXPCConnection:(id)arg1;
+ (id)processHandleForXPCConnection:(id)arg1;
+ (id)processHandleForAuditToken:(id)arg1;
+ (id)processHandle;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(readonly, nonatomic) BSMachPortTaskNameRight *taskNameRight; // @synthesize taskNameRight=_taskNameRight;
@property(copy, nonatomic) NSString *jobLabel; // @synthesize jobLabel=_jobLabel;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleID;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)_isRunningWithCertainty:(out _Bool *)arg1;
- (id)valueForEntitlement:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic) BSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
- (void)dealloc;
- (id)_initWithPID:(int)arg1 bundleID:(id)arg2;
- (id)initWithConnection:(id)arg1;
- (id)initWithPID:(int)arg1 bundleID:(id)arg2;
- (id)initWithCurrentProcess;
- (id)initWithAuditToken:(id)arg1;
- (id)initWithTaskNameRight:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

