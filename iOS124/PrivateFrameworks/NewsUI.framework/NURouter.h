//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NURouter-Protocol.h>

@class NSString;
@protocol NUURLHandling;

@interface NURouter : NSObject <NURouter>
{
    id <NUURLHandling> _urlHandler;
}

@property(readonly, nonatomic) id <NUURLHandling> urlHandler; // @synthesize urlHandler=_urlHandler;
- (void).cxx_destruct;
- (void)routeToNewsAppForYouFeed;
- (id)initWithURLHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

