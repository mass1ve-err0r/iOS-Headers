//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _ICLexiconView : NSObject
{
    struct _LXLexicon *_lexicon;
    unsigned char _typeFlags;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned char typeFlags; // @synthesize typeFlags=_typeFlags;
- (void).cxx_destruct;
- (const struct _LXLexicon *)getLexiconImplementation;
- (struct _LXEntry *)copyEntryForString:(id)arg1;
- (id)getSortKeyEquivalents:(id)arg1;
- (_Bool)contains:(id)arg1;
- (id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2;
- (void)dealloc;

@end

