//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/NSXMLParserDelegate-Protocol.h>

@class IMXMLReparserContext, NSError, NSMutableString, NSString, NSXMLParser;

@interface IMXMLReparser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *_parser;
    NSMutableString *_output;
    IMXMLReparserContext *_context;
    NSError *_error;
    unsigned long long _depth;
}

- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (_Bool)parseWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

