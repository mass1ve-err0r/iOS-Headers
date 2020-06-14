//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitMathMLNode.h>

#import <iWorkImport/EQKitFontStyling-Protocol.h>
#import <iWorkImport/EQKitLayoutSchemataText-Protocol.h>
#import <iWorkImport/EQKitMathMLNode-Protocol.h>

@class EQKitMathMLTokenContent, NSString;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMText : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataText, EQKitFontStyling>
{
    EQKitMathMLTokenContent *mContent;
}

- (int)scriptContext;
- (int)scriptVariant;
- (_Bool)isBaseFontNameUsed;
- (id)schemataChildren;
- (_Bool)schemataIsQuoted;
- (struct Schemata)layoutSchemata;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (void)dealloc;
- (id)initWithContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

