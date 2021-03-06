/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDDrawable;



@interface GQDWrapPoint : NSObject 
{
    struct CGPoint { 
        float x; 
        float y; 
    } mPoint;
    float mDistance;
    GQDDrawable *mDrawable;
    NSInteger mFlowType;
    NSInteger mZIndex;
}


- (id)initWithX:(float)arg1 y:(float)arg2 flowType:(NSInteger)arg3 drawable:(id)arg4;
- (NSInteger)comparePoint:(id)arg1;
- (NSInteger)zIndex;

@end
