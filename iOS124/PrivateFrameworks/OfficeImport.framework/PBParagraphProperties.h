//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBParagraphProperties : NSObject
{
}

+ (void)readParagraphProperties:(id)arg1 paragraphProperty:(struct PptParaProperty *)arg2 bulletStyle:(struct PptParaProperty9 *)arg3 isMaster:(_Bool)arg4 state:(id)arg5;
+ (void)readParagraphProperties:(id)arg1 paragraphPropertyRun:(struct PptParaRun *)arg2 bulletStyle:(struct PptParaProperty9 *)arg3 state:(id)arg4;
+ (int)pptFontAlignWithOADTextFontAlign:(unsigned char)arg1;
+ (int)pptAlignmentTypeWithOADTextAlignType:(unsigned char)arg1;
+ (short)pptTextSpacingWithOADParaSpacing:(id)arg1 defaultPptParaSpacing:(short)arg2;
+ (void)readAlign:(id)arg1 pptAlignmentType:(int)arg2;

@end

