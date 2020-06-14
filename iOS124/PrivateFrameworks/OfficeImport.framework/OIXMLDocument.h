//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OIXMLNode.h>

@class NSString, OIXMLElement;

__attribute__((visibility("hidden")))
@interface OIXMLDocument : OIXMLNode
{
    OIXMLElement *_rootElement;
    NSString *_version;
    NSString *_encoding;
}

@property(copy) NSString *version; // @synthesize version=_version;
@property(copy) NSString *characterEncoding; // @synthesize characterEncoding=_encoding;
@property(retain) OIXMLElement *rootElement; // @synthesize rootElement=_rootElement;
- (void).cxx_destruct;
- (id)closingTagString;
- (id)contentString;
- (id)openingTagString;
- (id)XMLString;
- (id)createMutableXMLString;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRootElement:(id)arg1;

@end

