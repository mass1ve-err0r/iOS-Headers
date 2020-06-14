//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoControlVisibilityItem-Protocol.h>

@class NSString, UIView;

@interface SVVideoControlVisibilityItem : NSObject <SVVideoControlVisibilityItem>
{
    _Bool _hideable;
    UIView *_view;
}

@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool hideable; // @synthesize hideable=_hideable;
- (void).cxx_destruct;
- (void)hide:(_Bool)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)isVisible;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

