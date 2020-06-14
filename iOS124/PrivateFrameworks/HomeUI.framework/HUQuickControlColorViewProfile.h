//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewProfile.h>

@protocol HFColorProfile;

@interface HUQuickControlColorViewProfile : HUQuickControlViewProfile
{
    _Bool _supportsRGBColor;
    id <HFColorProfile> _colorProfile;
}

@property(retain, nonatomic) id <HFColorProfile> colorProfile; // @synthesize colorProfile=_colorProfile;
@property(nonatomic) _Bool supportsRGBColor; // @synthesize supportsRGBColor=_supportsRGBColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

