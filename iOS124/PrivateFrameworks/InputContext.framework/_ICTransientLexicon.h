//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _ICTransientLexicon : NSObject
{
    struct _LXLexicon *_lexicon;
    int _count;
    unsigned char _typeFlags;
    NSString *_name;
    unsigned long long _entryCount;
}

@property(readonly, nonatomic) unsigned long long entryCount; // @synthesize entryCount=_entryCount;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned char typeFlags; // @synthesize typeFlags=_typeFlags;
- (void).cxx_destruct;
- (struct _LXLexicon *)getLexiconImplementation;
- (struct _LXEntry *)copyEntryForString:(id)arg1;
- (id)getSortKeyEquivalents:(id)arg1;
- (_Bool)contains:(id)arg1;
- (void)removeAllEntries;
- (void)removeEntry:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2;
- (void)dealloc;
- (id)getUsageCount:(id)arg1;
- (id)getEntryRefCount:(id)arg1;
- (id)getEntries;

@end

