//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDEntityEncoder.h>

@interface _HDQuantitySampleSeriesEntityEncoder : HDEntityEncoder
{
}

- (id)_codableQuantitySampleForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (_Bool)generateCodableRepresentationsForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 maxBytesPerRepresentation:(long long)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)orderedProperties;

@end

