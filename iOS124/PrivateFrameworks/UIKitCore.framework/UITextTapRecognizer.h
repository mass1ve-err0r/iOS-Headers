//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITapGestureRecognizer.h>

@class NSArray;

@interface UITextTapRecognizer : UITapGestureRecognizer
{
    NSArray *_touchesForTap;
}

@property(retain, nonatomic) NSArray *touchesForTap; // @synthesize touchesForTap=_touchesForTap;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

