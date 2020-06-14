//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UINamedLayerImage-Protocol.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _UIStackedImageSimpleImage : NSObject <UINamedLayerImage>
{
    int _blendMode;
    NSString *_name;
    double _opacity;
    UIImage *_imageObj;
    struct CGRect _frame;
}

@property(retain, nonatomic) UIImage *imageObj; // @synthesize imageObj=_imageObj;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool fixedFrame;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

