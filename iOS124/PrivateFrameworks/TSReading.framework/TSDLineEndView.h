//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class TSDLineEnd;

@interface TSDLineEndView : UIView
{
    TSDLineEnd *mLineEnd;
    _Bool mOnRight;
}

+ (id)viewWithLineEnd:(id)arg1 onRight:(_Bool)arg2;
@property(nonatomic) _Bool onRight; // @synthesize onRight=mOnRight;
@property(retain, nonatomic) TSDLineEnd *lineEnd; // @synthesize lineEnd=mLineEnd;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

