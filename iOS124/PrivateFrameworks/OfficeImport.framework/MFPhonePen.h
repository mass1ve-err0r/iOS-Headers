//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/MFPen.h>

__attribute__((visibility("hidden")))
@interface MFPhonePen : MFPen
{
    float m_PixelSize;
}

+ (id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4 LPToDPTransform:(struct CGAffineTransform)arg5;
- (void)strokePath:(id)arg1 in_path:(id)arg2;
- (void)applyLineCapStyleToPath:(id)arg1;
- (void)applyLineJoinStyleToPath:(id)arg1 in_path:(id)arg2;
- (void)applyDashedLinesToPath:(id)arg1;
- (id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;

@end

