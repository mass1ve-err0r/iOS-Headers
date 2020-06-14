//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSULogContext-Protocol.h>

@class NSString, TSKDocumentRoot;

__attribute__((visibility("hidden")))
@interface TSKDocumentRootLogContext : NSObject <TSULogContext>
{
    TSKDocumentRoot *_documentRoot;
}

- (void).cxx_destruct;
@property(readonly) NSString *privateString;
@property(readonly) NSString *publicString;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

