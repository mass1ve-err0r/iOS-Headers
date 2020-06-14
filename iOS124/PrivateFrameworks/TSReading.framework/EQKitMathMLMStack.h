//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitLayoutSchemataStack-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

@interface EQKitMathMLMStack : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStack>
{
    NSArray *mChildren;
    int mAlign;
}

- (_Bool)isBaseFontNameUsed;
- (int)schemataAlign;
- (id)schemataChildren;
- (struct Schemata)layoutSchemata;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

