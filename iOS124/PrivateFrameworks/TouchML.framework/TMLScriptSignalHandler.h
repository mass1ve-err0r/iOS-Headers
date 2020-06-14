//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/TMLSignalHandler-Protocol.h>

@class NSString, TMLContext;

@interface TMLScriptSignalHandler : NSObject <TMLSignalHandler>
{
    TMLContext *_context;
    id _target;
    NSString *_functionName;
    unsigned long long _returnType;
    int _flags;
}

- (void).cxx_destruct;
- (void)detach;
- (void)attach;
- (id)callWithArguments:(id)arg1;
- (id)initWithFunctionName:(id)arg1 returnType:(unsigned long long)arg2 target:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

