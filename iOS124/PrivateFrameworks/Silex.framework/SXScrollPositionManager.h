//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXScrollPositionManager-Protocol.h>

@class NSString;
@protocol SXScrollPositionRestoring;

@interface SXScrollPositionManager : NSObject <SXScrollPositionManager>
{
    id <SXScrollPositionRestoring> _scrollPositionRestoring;
}

@property(nonatomic) __weak id <SXScrollPositionRestoring> scrollPositionRestoring; // @synthesize scrollPositionRestoring=_scrollPositionRestoring;
- (void).cxx_destruct;
- (void)updateScrollPosition:(id)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

