//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUMaskProvider.h>

@class UIBezierPath;

@interface SUBezierPathMaskProvider : SUMaskProvider
{
    UIBezierPath *_bezierPath;
}

@property(retain, nonatomic) UIBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
- (struct CGPath *)copyPathForMaskWithSize:(struct CGSize)arg1;
- (void)dealloc;

@end

