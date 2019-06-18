export class Singleton {

    private static INSTANCE: Singleton;

    private _number: number;

    private constructor() {
        this._number = 0;
    }

    public static getInstance(): Singleton {

        if (!Singleton.INSTANCE) {
            Singleton.INSTANCE = new Singleton();
        }

        return Singleton.INSTANCE;
    }

    public setNumber(n: number): void {
        this._number = n;
    }

    public getNumber(): number {
        return this._number;
    }

}
