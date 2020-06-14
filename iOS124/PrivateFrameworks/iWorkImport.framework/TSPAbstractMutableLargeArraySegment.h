//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/NSFastEnumeration-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol TSPMutableLargeArraySegmentDelegate;

__attribute__((visibility("hidden")))
@interface TSPAbstractMutableLargeArraySegment : TSPObject <NSFastEnumeration>
{
    _Bool _storeOutsideObjectArchive;
    _Bool _shouldDelayArchiving;
    unsigned int _delayedArchivingPriority;
    NSString *_packageLocator;
    NSMutableArray *_backingStore;
    unsigned long long _mutations;
    unsigned long long _estimatedByteSize;
    id <TSPMutableLargeArraySegmentDelegate> _delegate;
}

@property(nonatomic) __weak id <TSPMutableLargeArraySegmentDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *packageLocator; // @synthesize packageLocator=_packageLocator;
@property(nonatomic) _Bool shouldDelayArchiving; // @synthesize shouldDelayArchiving=_shouldDelayArchiving;
@property(nonatomic) _Bool storeOutsideObjectArchive; // @synthesize storeOutsideObjectArchive=_storeOutsideObjectArchive;
- (void).cxx_destruct;
- (void)loadFromLargeArraySegmentMessage:(const struct LargeArraySegment *)arg1 unarchiver:(id)arg2;
- (void)saveToLargeArraySegmentMessage:(struct LargeArraySegment *)arg1 archiver:(id)arg2;
- (void)loadStoreOutsideObjectArchiveFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(nonatomic) unsigned int delayedArchivingPriority;
@property(nonatomic) unsigned long long estimatedByteSize;
- (unsigned long long)estimatedByteSizeOfElement:(id)arg1;
- (id)bisectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSMutableArray *mutableArrayWrapper;
@property(readonly, nonatomic) NSArray *allObjects;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 willModify:(_Bool)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long count;
- (void)commonInit;
- (id)initWithArray:(id)arg1 delegate:(id)arg2 shouldDelayArchiving:(_Bool)arg3 context:(id)arg4;
- (id)initWithArray:(id)arg1 context:(id)arg2;
- (id)initWithDelegate:(id)arg1 shouldDelayArchiving:(_Bool)arg2 context:(id)arg3;
- (id)initWithContext:(id)arg1;

@end

