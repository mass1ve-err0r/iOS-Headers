//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSProcessExecutionPolicy, FBSSceneActivitySession, FBSSceneParameters, FBSSceneSpecification, FBSSerialQueue, NSString;
@protocol FBSProcess, FBSSceneAgentProxy;

@protocol FBSSceneHandle <NSObject>
- (void)closeSession:(FBSSceneActivitySession *)arg1;
- (FBSSceneActivitySession *)sessionForIdentifier:(NSString *)arg1;
- (FBSSceneActivitySession *)openSessionWithName:(NSString *)arg1 executionPolicy:(FBSProcessExecutionPolicy *)arg2;
- (id <FBSProcess>)clientProcess;
- (id <FBSProcess>)hostProcess;
- (id <FBSSceneAgentProxy>)counterpartAgent;
- (FBSSerialQueue *)callOutQueue;
- (FBSSceneSpecification *)specification;
- (FBSSceneParameters *)parameters;
- (NSString *)identifier;
@end

