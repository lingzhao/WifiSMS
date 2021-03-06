/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;



@interface GMMDirectionsOptionResponse : PBCodable 
{
    NSMutableArray *_options;
}

@property(readonly) NSInteger optionsCount;
@property(retain) NSMutableArray *options; /* unknown property attribute: V_options */


- (id)init;
- (void)dealloc;
- (NSInteger)optionsCount;
- (void)setOption:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)optionAtIndex:(NSUInteger)arg1;
- (void)addOption:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)options;
- (void)setOptions:(id)arg1;

@end
