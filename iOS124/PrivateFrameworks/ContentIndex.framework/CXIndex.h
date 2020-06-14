//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CXIndex : NSObject
{
    int _cancel;
    NSString *_path;
    struct __SI *_skRef;
}

+ (void)initialize;
@property(readonly, nonatomic) struct __SI *skRef; // @synthesize skRef=_skRef;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) int cancel; // @synthesize cancel=_cancel;
- (_Bool)addContent:(id)arg1 transaction:(unsigned int *)arg2;
- (_Bool)addContent:(id)arg1 metadata:(id)arg2 doc:(unsigned int)arg3 transaction:(unsigned int *)arg4;
- (void)deleteDocument:(unsigned int)arg1;
- (void)deleteDocumentByName:(id)arg1;
- (_Bool)addContent:(id)arg1 metadata:(id)arg2 docName:(id)arg3 transaction:(unsigned int *)arg4;
- (_Bool)compact:(unsigned int)arg1;
- (_Bool)commit;
- (_Bool)flush:(unsigned int)arg1;
- (void)close:(unsigned int)arg1;
- (struct __SI **)siIndexPtr;
- (int *)cancelPtr;
- (void)dealloc;
- (_Bool)create:(unsigned int)arg1;
- (_Bool)open:(unsigned int)arg1 recoveredTransactionId:(unsigned int *)arg2;
- (id)initWithPath:(id)arg1;

@end

