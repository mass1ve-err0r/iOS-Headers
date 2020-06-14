//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SVVideoAccessoryBarItemDisplayState;

@interface SVVideoAccessoryBarDisplayState : NSObject
{
    SVVideoAccessoryBarItemDisplayState *_leadingState;
    SVVideoAccessoryBarItemDisplayState *_trailingState;
}

@property(readonly, nonatomic) SVVideoAccessoryBarItemDisplayState *trailingState; // @synthesize trailingState=_trailingState;
@property(readonly, nonatomic) SVVideoAccessoryBarItemDisplayState *leadingState; // @synthesize leadingState=_leadingState;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLeadingState:(id)arg1 trailingState:(id)arg2;

@end

