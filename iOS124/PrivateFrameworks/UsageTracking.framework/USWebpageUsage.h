//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol _CDUserContext, _DKKnowledgeSaving;

@interface USWebpageUsage : NSObject
{
    NSMutableDictionary *_contextUsageRecord;
    NSURL *_URL;
    id <_CDUserContext> _context;
    id <_DKKnowledgeSaving> _eventStorage;
}

@property(readonly) id <_DKKnowledgeSaving> eventStorage; // @synthesize eventStorage=_eventStorage;
@property(readonly) id <_CDUserContext> context; // @synthesize context=_context;
@property(readonly) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)changeState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 context:(id)arg2 eventStorage:(id)arg3;

@end

