//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface MTUIBitmapHandView : UIView
{
    NSArray *_partViews;
    NSArray *_partViewsMaintainingOrientation;
}

+ (id)partInfoWithName:(id)arg1 offset:(struct CGPoint)arg2 maintainsOrientation:(_Bool)arg3;
+ (id)partInfoWithName:(id)arg1;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 rotationalCenter:(struct CGPoint)arg2;
- (id)initWithBundle:(id)arg1 resourcePath:(id)arg2 partInfoList:(id)arg3 rotationalCenter:(struct CGPoint)arg4;

@end

