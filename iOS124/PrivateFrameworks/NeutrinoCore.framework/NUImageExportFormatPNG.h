//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatPNG : NUImageExportFormat
{
    _Bool _preserveAlpha;
}

@property _Bool preserveAlpha; // @synthesize preserveAlpha=_preserveAlpha;
- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (int)renderFormat;
- (id)fileType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

