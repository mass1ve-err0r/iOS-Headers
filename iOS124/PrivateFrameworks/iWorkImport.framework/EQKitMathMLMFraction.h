//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitMathMLBinaryNode.h>

#import <iWorkImport/EQKitLayoutSchemataFraction-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMFraction : EQKitMathMLBinaryNode <EQKitLayoutSchemataFraction>
{
}

- (id)schemataDenominator;
- (id)schemataNumerator;
- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (struct Schemata)layoutSchemata;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

