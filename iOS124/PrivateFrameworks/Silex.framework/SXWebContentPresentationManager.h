//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentMessageHandler-Protocol.h>
#import <Silex/SXWebContentPresentationManager-Protocol.h>

@class NSString;
@protocol SXWebContentLogger, SXWebContentScriptsManager;

@interface SXWebContentPresentationManager : NSObject <SXWebContentMessageHandler, SXWebContentPresentationManager>
{
    unsigned long long _presentationState;
    double _height;
    CDUnknownBlockType loadBlock;
    CDUnknownBlockType presentableBlock;
    id <SXWebContentScriptsManager> _scriptsManager;
    id <SXWebContentLogger> _logger;
}

@property(readonly, nonatomic) id <SXWebContentLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SXWebContentScriptsManager> scriptsManager; // @synthesize scriptsManager=_scriptsManager;
@property(copy, nonatomic, setter=onPresentable:) CDUnknownBlockType presentableBlock; // @synthesize presentableBlock;
@property(copy, nonatomic, setter=onLoad:) CDUnknownBlockType loadBlock; // @synthesize loadBlock;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
- (void).cxx_destruct;
- (id)descriptionForPresentationState:(unsigned long long)arg1;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (void)refresh;
- (id)initWithWebContentScriptsManager:(id)arg1 messageHandlerManager:(id)arg2 documentStateProvider:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

