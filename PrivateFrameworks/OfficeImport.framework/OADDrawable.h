/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADDrawable : NSObject {
    unsigned long  mAltId;
    <OADClient> * mClientData;
    OADDrawableProperties * mDrawableProperties;
    BOOL  mHidden;
    unsigned long  mId;
    OADDrawable<OADDrawableContainer> * mParent;
}

+ (unsigned long)generateOADDrawableId:(id)arg1;

- (unsigned long)altId;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (id)clientData;
- (id)createOrientedBoundsWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)createWordClientDataWithTextType:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)drawableProperties;
- (id)ensureClientDataOfClass:(Class)arg1;
- (BOOL)hidden;
- (unsigned long)id;
- (id)initWithPropertiesClass:(Class)arg1;
- (id)parent;
- (void)removeUnnecessaryOverrides;
- (void)setAltId:(unsigned long)arg1;
- (void)setClientData:(id)arg1;
- (void)setDrawableProperties:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setId:(unsigned long)arg1;
- (void)setParent:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;

@end
