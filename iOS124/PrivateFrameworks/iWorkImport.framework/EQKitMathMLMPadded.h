//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitMathMLUnaryNode.h>

#import <iWorkImport/EQKitLayoutSchemataPadded-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMPadded : EQKitMathMLUnaryNode <EQKitLayoutSchemataPadded>
{
}

- (id)schemataNode;
- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (struct Schemata)layoutSchemata;
- (void)dealloc;
- (const set_25e6ba53 *)mathMLAttributes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

