//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/MFPBrush.h>

@class OITSUColor, OITSUImage;

__attribute__((visibility("hidden")))
@interface MFPImageBrush : MFPBrush
{
    OITSUImage *mPhoneImage;
    OITSUColor *mPhonePatternColor;
}

- (id)color;
- (void)fillPath:(id)arg1;
- (void)dealloc;
- (id)initWithPhoneImage:(id)arg1;

@end

