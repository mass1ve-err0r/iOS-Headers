//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAAnimation.h>

@class NSDictionary, NSString;

@interface CATransition : CAAnimation
{
}

- (void)setFilter:(id)arg1;
- (id)filter;
@property float endProgress;
@property float startProgress;
@property(copy) NSString *subtype;
@property(copy) NSString *type;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
@property unsigned int transitionFlags;
@property(copy) NSDictionary *options;

@end
