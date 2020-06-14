//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NTKAVListing-Protocol.h>

@class CLKDevice, CLKVideo, NSString, UIColor, UIImage;

@interface NTKVideoListing : NSObject <NSCopying, NTKAVListing>
{
    CLKDevice *_device;
    CLKVideo *_video;
    UIImage *_image;
    NSString *_name;
    NSString *_videoName;
    NSString *_transitionImageName;
    UIColor *_overlayColor;
    unsigned long long _theme;
    long long _variant;
    long long _clip;
    unsigned long long _tags;
}

@property(readonly, nonatomic) long long clip; // @synthesize clip=_clip;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) unsigned long long theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
- (void).cxx_destruct;
- (void)discardAssets;
- (_Bool)hasTag:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)snapshotDiffers:(id)arg1;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) CLKVideo *video;
- (void)_setHasAssets;
- (id)initForDevice:(id)arg1 withName:(id)arg2 videoName:(id)arg3 transitionImageName:(id)arg4 overlayColor:(id)arg5 theme:(unsigned long long)arg6 variant:(long long)arg7 clip:(long long)arg8 tags:(unsigned long long)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

