//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSPCopying-Protocol.h>
#import <iWorkImport/TSWPTextSpanningObject-Protocol.h>

@class NSString, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPSmartField : TSPObject <TSKDocumentObject, TSPCopying, TSWPTextSpanningObject>
{
    NSString *_textAttributeUUIDString;
    unsigned long long _lastTableIndex;
    TSWPStorage *_parentStorage;
}

+ (id)defaultFieldStyleIdentifier;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) __weak TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *textAttributeUUIDString;
- (_Bool)isEquivalentToObject:(id)arg1;
- (void)resetTextAttributeUUIDString;
- (void)loadFromArchive:(const struct SmartFieldArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct SmartFieldArchive *)arg1 archiver:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)text;
- (_Bool)canCopy:(struct _NSRange)arg1;
- (_Bool)allowsPasteAsSmartField;
- (_Bool)allowsEditing;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) int styleAttributeArrayKind;
@property(readonly, nonatomic) unsigned long long attributeArrayKind;
- (int)smartFieldKind;
- (id)copyWithContext:(id)arg1;
- (void)i_setTextAttributeUUIDString:(id)arg1;
- (id)initFromSmartField:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

