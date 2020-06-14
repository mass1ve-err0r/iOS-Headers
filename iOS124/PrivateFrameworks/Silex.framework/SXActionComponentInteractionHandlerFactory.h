//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionComponentInteractionHandlerFactory-Protocol.h>

@class NSString;
@protocol SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;

@interface SXActionComponentInteractionHandlerFactory : NSObject <SXActionComponentInteractionHandlerFactory>
{
    id <SXActionManager> _actionManager;
    id <SXActionSerializer> _actionSerializer;
    id <SXAnalyticsReportingProvider> _analyticsReportingProvider;
}

@property(readonly, nonatomic) id <SXAnalyticsReportingProvider> analyticsReportingProvider; // @synthesize analyticsReportingProvider=_analyticsReportingProvider;
@property(readonly, nonatomic) id <SXActionSerializer> actionSerializer; // @synthesize actionSerializer=_actionSerializer;
@property(readonly, nonatomic) id <SXActionManager> actionManager; // @synthesize actionManager=_actionManager;
- (void).cxx_destruct;
- (id)interactionHandlerForAction:(id)arg1;
- (id)initWithActionManager:(id)arg1 actionSerializer:(id)arg2 analyticsReportingProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

